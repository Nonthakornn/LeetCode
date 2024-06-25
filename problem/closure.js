// for (var i = 0; i < 3; i++){
//     const log = () => {
//         console.log(i);
//     }
//     //setTimeout(log, 100);
// } 
//333


// for (let i = 0; i < 3; i++){
//     const log = () => {
//         console.log(i);
//     }
//     setTimeout(log, 100);
// }  
//123



//You can not access variable outside of a function inside of that function but JS can
// const myName = 'Kyle'

// function printName() {
//     console.log(myName)
// }

// printName()
     
function outerFunction(outerVariable) {
    return function innerFunction(innerVariable) {
        console.log('Outer Variable:' + outerVariable)
        console.log('Inner Variable:' + innerVariable)
    }
}

const newFunction = outerFunction('outside')
console.log(newFunction())
//newFunction('inside')
