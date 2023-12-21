/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const result = [];
    arr.forEach((element ,i) => {
        result[i] = fn(element, i) 
    })
    return result;
};