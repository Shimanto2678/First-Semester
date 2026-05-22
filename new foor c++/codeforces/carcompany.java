public class carcompany {
    public static void main(String[] args) {

     car car1 = new car(9386,3786);
     
    

     System.out.println("The first car model is "+car1.ne);
     System.out.println("The first car name is "+car1.code);
              

    }
}


class car{

    car(int s,int n)
    {
       int ne = s;
      int code = n;
      String model = "mustang";
    }

    
    int code;
    

}