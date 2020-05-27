var canvas = document.getElementById("myCanvas");
var cx = canvas.getContext("2d");
var rectW = 50;
var rectH = 50;
var rectX = canvas.width / 2;
var rectY = canvas.height - rectH;
var speedX = 10;
var speedY = 3
var gravity = -4;



function draw() {
  cx.fillStyle = ("black");
  cx.fillRect(0, 0, canvas.width, canvas.height);
  
  cx.fillStyle = ("red");
  cx.fillRect(rectX, rectY, rectW, rectH);
}



function jump() {
    var myInterval = setInterval(function() {
      rectY = rectY - speedY;
      if (rectY == 300 || rectY < 300) {
        speedY = gravity;   
      }
      if (rectY == canvas.height - rectH || rectY > canvas.height - rectH) {
        speedY = 0;
        rectY = canvas.height - rectH;
        clearInterval(myInterval); 
      }

      window.requestAnimationFrame(draw);
    },1);
}

document.addEventListener("keydown", function(event) {
  switch(event.keyCode) {
    case 38: //uparrow
    case 32: //space
      jump();
      speedY = 3;
      break;

    case 37: //arrowleft
    case 65: //a
      rectX = rectX - speedX;
      if (rectX == 0 || rectX < 0) {
        rectX = 0;
      }    
      window.requestAnimationFrame(draw);
      break;

    case 39: //arrowright
    case 68: //d
      rectX = rectX + speedX;
      if (rectX == canvas.width - rectW || rectX > canvas.width - rectW) {
        rectX = canvas.width - rectW;
      }
       window.requestAnimationFrame(draw);
       break;  
  }
});


window.requestAnimationFrame(draw); //on window start
