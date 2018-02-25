let component = ReasonReact.statelessComponent("Base");

let make =  (_) => {
  ...component,
  render: (_) =>
    <h1> (ReasonReact.stringToElement("Todo List!!")) </h1>
};