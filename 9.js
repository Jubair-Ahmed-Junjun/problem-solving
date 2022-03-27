var isPalindrome = function(x) {
    let original = x;
    let reverse = 0;
    let tem;
    while(x != 0){
        tem = x%10;
        reverse = reverse*10+tem;
        x /= 10;
    }
    if(original==reverse){
        console.log("true")
    }else{
        console.log("false")
    }
};