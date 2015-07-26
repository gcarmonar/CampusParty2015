var mraa = require('mraa'); //require mraa
console.log('MRAA Version: ' + mraa.getVersion());


function funcion1(){
	console.log("Hello world!");
}

function funcion2(){
    console.log("Hola mundo!");
}

setInterval(funcion1, 1000);
setInterval(funcion2, 3000);
