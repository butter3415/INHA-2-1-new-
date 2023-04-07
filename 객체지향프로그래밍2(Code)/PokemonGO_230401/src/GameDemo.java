import DataBase.DBManager;
import Settings.ChooseMyPokemon;
import Settings.OwnerSetting;

public class GameDemo {
    public static void main(String[] args) {

        new DBManager();

        ChooseMyPokemon pokemon1 = new ChooseMyPokemon();

        OwnerSetting.OwnerName();

        pokemon1.ChooseMyPokemon();

        pokemon1.StartTrip();

        Menu.menu();
    }
}