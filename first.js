console.log("hellli");
var mongoose = require('mongoose');

//Set up default mongoose connection
console.log("hellli");
var mongoDB = 'mongodb://127.0.0.1/my_database';
mongoose.connect(mongoDB, {useNewUrlParser: true, useUnifiedTopology: true});
console.log("lol");

var db = mongoose.connection;


//Bind connection to error event (to get notification of connection errors)
//db.on('error', console.error.bind(console, 'MongoDB connection error:'));
console.log("hi");

