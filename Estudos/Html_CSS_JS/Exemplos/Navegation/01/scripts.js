const btn_mobile = document.getElementById('nav-menu1');
function toggleMenu(){
   const ul = document.getElementById('ul');
   ul.classList.toggle('nav-list-mobile');
}
btn_mobile.addEventListener('click', toggleMenu);