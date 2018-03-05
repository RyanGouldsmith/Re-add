let component = ReasonReact.statelessComponent("TodoInput");

let make = (~title, _) => {
  ...component,
  render: (_) => 
    <div className="todo-input"> 
      <input _type="text" placeholder={title} />
    </div>
};