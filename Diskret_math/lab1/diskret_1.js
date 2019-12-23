// // A v (B \ C)

let arr = [];
let arr2 = [];
let arr3 = [];

do {
    let num = Math.floor(Math.random() * 40 + 1);
    arr.push(num);
    arr = arr.filter((item, index) => {
        return arr.indexOf(item) === index
    });
} while (arr.length < 20);


arr.sort(function (a, b) {
    return a - b
}); 
console.log('\nA is: ',arr);

do {
    let num = Math.floor(Math.random() * 40 + 1);
    arr2.push(num);
    arr2 = arr2.filter((item, index) => {
        return arr2.indexOf(item) === index
    });
} while (arr2.length < 20);


arr2.sort(function (a, b) {
    return a - b
});
console.log('\nB is: ',arr2);

do {
    let num = Math.floor(Math.random() * 40 + 1);
    arr3.push(num);
    arr3 = arr3.filter((item, index) => {
        return arr3.indexOf(item) === index
    });
} while (arr3.length < 20);


arr3.sort(function (a, b) {
    return a - b
});
console.log('\nC is: ', arr3);



let difference = arr2.filter(x => !arr3.includes(x)); 
console.log('\nB / C is :', difference);


function merge_array(array1, array2) {
    var result_array = [];
    var arr = array1.concat(array2);
    var len = arr.length;
    var assoc = {};

    while (len--) {
        var item = arr[len];

        if (!assoc[item]) {
            result_array.unshift(item);
            assoc[item] = true;
        }
    }

    return result_array;
}

let mergedArray = merge_array(difference, arr);
mergedArray.sort(function (a, b){
    return a - b
});


console.log('\nA v (B / C) is: [ ' + mergedArray.join(', ') + ' ]')