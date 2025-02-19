public abstract class Duck {

   public Duck( ) { }

   public abstract void display( );
   
   public void swim( ) {
      System.out.println("All ducks float");
   }
   
   public void performQuack ( ) {
      quackBehavior.quack( );
   }
   
   public void performFly( ) {
      flyBehavior.fly( );
   }

   public void performEggLaying( ) {
      eggBehavior.laysEgg();
   }
   
   public void setFlyBehavior(FlyBehavior fb) {
      flyBehavior = fb;
   }
      
   public void setQuackBehavior(QuackBehavior qb) {
      quackBehavior = qb;
   }

   public void setEggBehavior(LaysEgg eb) {
      eggBehavior = eb;
   }

   protected QuackBehavior quackBehavior;
   protected FlyBehavior flyBehavior;
   protected LaysEgg eggBehavior;
}

