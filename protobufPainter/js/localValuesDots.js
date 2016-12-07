.pragma library

var allDots = [];
var sizeCoof;

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

