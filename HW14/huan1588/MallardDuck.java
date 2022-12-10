public class MallardDuck extends Duck {
   public MallardDuck( ) {
      quackBehavior = new Quack( );
      flyBehavior = new FlyWithWings( );
      eggBehavior = new LaysEggBroody();
   }
   
   public void display( ) {
      System.out.println("I’m a real mallard duck");
   }
}
