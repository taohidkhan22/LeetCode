var a=20;
function  x(){
   
       console.log("start");
        setTimeout(function(){
            console.log("settimeout");
        },0);
        Promise.resolve().then( ()=>{
            console.log('Promise');
        });
        console.log("end");



}
x();
{
    console.log(a);
    var a=39;
    console.log(a);
}


