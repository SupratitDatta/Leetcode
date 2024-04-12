/**
 * @param {number} n
 * @return {Function} counter
 */
const createCounter = n => {
    let c=n, i=-1
    return () => c + ++i;
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */