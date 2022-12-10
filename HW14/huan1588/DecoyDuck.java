public class DecoyDuck extends Duck {

   public DecoyDuck( ) {
      flyBehavior = new FlyNoWay( );
      quackBehavior = new MuteQuack( );
      eggBehavior = new LaysEggBroody();
   }

   public void display( ) {
      System.out.println("I’m a decoy duck");
   }
}
