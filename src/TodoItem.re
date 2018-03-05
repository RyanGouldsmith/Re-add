let component = ReasonReact.statelessComponent("TodoItem");

let make = (~title, _) => {
  ...component,
  render: (_) => <div className="todo-item">{ ReasonReact.stringToElement(title) }</div>
}