// Problem: 2677. Chunk Array
// Runtime: 39 ms (Beats 88.74%)
// Memory: 57.4 MB (Beats 18.98%)

/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    let result = [];

    for (let i = 0; i < arr.length; i += size) {
        result.push(arr.slice(i, i + size));
    }

    return result;
};