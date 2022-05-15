/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function (array) {
  let arrLength = array.length;
  for (let i = 0; i < arrLength; i++) {
    let item = array[0];
    array = array.slice(1);
    if (array.indexOf(item) === -1) {
      return item;
    } else {
      array.splice(array.indexOf(item), 1);
    }
  }
};
