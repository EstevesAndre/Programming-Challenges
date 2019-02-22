/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    let num = x.toString();
    
    let l_index = 0, r_index = num.length - 1;
    
    while(l_index <= r_index)
    {
        if(num[l_index] != num[r_index]) return false;
        l_index++;
        r_index--;
    }
    
    return true;
};