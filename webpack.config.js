const path = require('path');
const outputDir = path.join(__dirname, "build");

module.exports = {
  entry: ['./src/Index.bs.js'],
  output: {
    path: outputDir,
    publicPath: './build',
    filename: 'Index.js',
  },
  module: {
    loaders: [
      {
        test: /\.html$/,
        loader: 'html-loader'
      }]
  },
  devServer: {
    contentBase: outputDir,
    hot: true
  },
};
