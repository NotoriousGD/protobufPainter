.pragma library

var allDots = [];

function removeDots() {
    allDots.forEach(function(item,arr){
        item.destroy();
    })
    allDots = [];
}

function addDot(item) {
    allDots.push(item);
}

function getDots(){
    return allDots;
}
