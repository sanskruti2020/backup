console.log("this is tutorial 53");
let name1 = "ram";
let greetings = "Helooooooooo";
// Functions -- building block
function greet(name, greet="Hello")    // here greet will be default argument that we already specifiied
{
    console.log(name + " is a good boy");
    console.log(greet);
}
// calling functions
// greet(name1);             // default value of greet will be taken
greet(name1, greetings);

// Returning functions
function sum(a, b, c)
{
    let d = a+b+c;
    return d;
}

let ans = sum(1,2,3);
console.log(ans);