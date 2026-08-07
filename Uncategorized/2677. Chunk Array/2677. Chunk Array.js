// Problem: 2677. Chunk Array
// Runtime: 50 ms (Beats 39.14%)
// Memory: 55.5 MB (Beats 88.28%)

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