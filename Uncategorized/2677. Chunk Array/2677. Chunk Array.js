// Problem: 2677. Chunk Array
// Runtime: 46 ms (Beats 60.63%)
// Memory: 56 MB (Beats 67.63%)

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