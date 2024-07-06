var passThePillow = function(n, time) {
    if (n === 1) return 1; 

    let round = Math.floor(time / (n - 1)); 
    let remainder = time % (n - 1); 

    if (round % 2 === 0) {
        return 1 + remainder;
    } else {
        return n - remainder;
    }
};