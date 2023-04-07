import DataBase.DBManager;

public class GameDemo {
    public static void main(String[] args) {
        new DBManager();

        MyPokemon m1 = new MyPokemon();
        Owner.OwnerName();

        m1.MyPokemonChoice();
        m1.StartPokemon();
        Menu.menu();
    }
}