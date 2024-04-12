/**
 * @param {number[]} a
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(a, fn) {
    var m = [];
    for (var i=0; i<a.length; i++) {
        m.push(fn(a[i], i));
    }
    return m;
};