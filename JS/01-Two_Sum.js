
// const test = {
//     name : "Alex",
//     city: "BKK"
// }

// //!This one is wrong
// //console.log(test[1])

// console.log(test["name"]);
// console.log(test["city"]);
// console.log(test.name);
// console.log(test.city);




const nums = [1,2,3,4]
const target = 4;

var twosum = function(nums, target) {
    const previousNumber = {}
    for (let i = 0; i < nums.length ; i++){
        const num1 = nums[i]
        const neededValue = target - num1
        const index2 = previousNumber[neededValue]
        if (index2 != null) {
            return [index2, i]
        }
        else {
            previousNumber[num1] = i
        }

    }

}

console.log(twosum(nums,target))