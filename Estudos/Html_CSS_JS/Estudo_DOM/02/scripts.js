let input_color = document.getElementById('input_color');
let div = document.getElementById('div');
/*
div.style.backgroundColor = input_color.value;
*/

input_color.addEventListener('input', (event) =>{
   div.style.backgroundColor = event.target.value;
}, false);
