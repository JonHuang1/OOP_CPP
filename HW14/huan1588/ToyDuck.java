public class ToyDuck extends Duck {
    public ToyDuck( ) {
        quackBehavior = new Quack( );
        flyBehavior = new FlyNoWay( );
        eggBehavior = new LaysToyEggs( );
    }

    public void display( ) {
        System.out.println("I'm a toy duck");
    }
}
