type todo = {
  title: string,
  mutable completed: bool
};

type state = {
  todoItems: array(todo)
};

let component = ReasonReact.reducerComponent("Base");

let make = (_) => {
  ...component,
  initialState: () => {
    todoItems: [|{ title: "Test Todo!", completed: false}|]
  },
  reducer: ((), _state) => ReasonReact.NoUpdate,
  render: (self) => {
    let todoItems = self.state.todoItems |> Array.map(({title}) => <TodoItem title />);
    <div> 
      <h1> (ReasonReact.stringToElement("Todo List!!")) </h1>
      (<TodoInput title="Enter a Todo ..."/>)
      <ul className="todo-list">
        (ReasonReact.arrayToElement(todoItems))
      </ul>
    </div>
  }
};