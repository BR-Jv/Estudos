function myFunction() {
   const nav_mobile = document.getElementById('nav-bar-mobile');
   if(nav_mobile.className === "class-off"){
      nav_mobile.classList.remove("class-off");
      nav_mobile.classList.add("nav-bar");
   }else {
      nav_mobile.classList.remove("nav-bar");
      nav_mobile.classList.add("class-off");
   }
}
