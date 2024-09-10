
//insere um texto no elemento selecionado
document.getElementById("id do elemento que será alterado").innerHTML="seila";

//mostra uma mensagem no console de desenvolvedor
console.log("alguma mensagem");

//cria uma função
function minhafunção {



}

//declares uma variavel para função,loop ou conditional
//let is block-scoped, meaning it’s only available within the nearest set of curly braces ({})
let x = 10;
if(x > 5) {
    let y = x + 5;
    console.log(y);
}

//declares a variable as let for example
//If you declare a variable with var outside of any function, it becomes a global variable, which means it's accessible anywhere in your code.
var globalVar = "I am global";

function checkGlobalVar() {
    console.log(globalVar);
}

checkGlobalVar();

//sintaxe:

x === y; //igualdade

&& || //e e ou

var x, y;
x = 10;         //if e else
y = (x < 11) ? "x menor que 11" : "x maior ou igual a 11";

//objetos: exemplo

const carro = {  //propriedades e metodos/funções do objeto "carro"
    marca:"ford",
    modelo:"KA",
    ano:"2014",
    placa:"abc-123"
    buzina: function() {alert('BIIIIIIII');}
    completo: function() {
        return "A marca é" + this.marca + "e o modelo é" + this.modelo;
    }
    };

// verificação de formularios

function verificar() {
    let nome = document.getElementById("nome").value;

    if(nome == "" || nome == "null") {
        let p = document.getElementById("teste");
        p.innerHTML = "O campo não pode ser vazio";
        p.style.color = "red";
    }
    else {
        let p = document.getElementById("teste");
        p.innerHTML = "Parabéns tudo certo";
        p.style.color = "green";
    }
}

//switch:
//It's an alternative to using multiple if...else if statements
//when you have several possible conditions that depend on
//the same variable or expression.
switch(expression) {
    case value1:
        // Code to execute if expression === value1
        break;
    case value2:
        // Code to execute if expression === value2
        break;
    // You can have as many cases as you need
    default:
        // Code to execute if none of the cases match
}

//classes:
//a class is a blueprint for creating objects that
//encapsulates data (properties) and functions (methods)
//to operate on that data.

class ClassName {
    constructor(parameter1, parameter2) {
        // Initialize properties
        this.property1 = parameter1;
        this.property2 = parameter2;
    }
     // Method 1
     method1() {
        // Code for method1
     }
    }

//JSON:
//JSON is primarily used to transmit data between
// a server and a web application as text.





