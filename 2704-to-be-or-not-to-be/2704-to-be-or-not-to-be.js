/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    return {
        toBe: (v2) => {
            if(val === v2){
                return true;
            }
            else{
                throw new Error("Not Equal");
            }
        },
        notToBe: (v2) => {
            if(val !== v2){
                return true;
            }
            else{ 
                throw new Error("Equal");
            }
        }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */