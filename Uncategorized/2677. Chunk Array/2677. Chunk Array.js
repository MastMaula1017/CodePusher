// Problem: 2677. Chunk Array
// Runtime: 54 ms (Beats 19.78%)
// Memory: 55.9 MB (Beats 74.02%)

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