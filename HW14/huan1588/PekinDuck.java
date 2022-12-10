public class PekinDuck extends Duck {
    public PekinDuck( ) {
        quackBehavior = new Quack( );
        flyBehavior = new FlysPoorly( );
        eggBehavior = new LaysEggsNotBroody( );
    }

    public void display( ) {
        System.out.println("I'm a real pekin duck");
    }
}
