import Pokemons.*;
import Pokemons.level1.Ggobugi;
import Pokemons.level1.IsanghaeSeed;
import Pokemons.level1.Pairi;
import Pokemons.level2.Anibugi;
import Pokemons.level2.IsanghaeGrass;
import Pokemons.level2.Lizard;
import Pokemons.level3.GgobuckKing;
import Pokemons.level3.IsanghaeFlower;
import Pokemons.level3.Lizamong;

import java.util.ArrayList;
import java.util.List;

public class PokemonListSettings {

    private static List<Pokemon> PoList_level1 = new ArrayList<>();
    private static List<Pokemon> PoList_level2 = new ArrayList<>();
    private static List<Pokemon> PoList_level3 = new ArrayList<>();

    public static List<Pokemon> getPoList_level1() {
        return PoList_level1;
    }
    public static List<Pokemon> getPoList_level2() {return PoList_level2;}
    public static List<Pokemon> getPoList_level3() {return PoList_level3;}

    public static void Pokemon_settings() {
        PoList_level1.add(null);
        PoList_level1.add(new Pairi());
        PoList_level1.add(new Ggobugi());
        PoList_level1.add(new IsanghaeSeed());


        PoList_level2.add(null);
        PoList_level2.add(new Lizard());
        PoList_level2.add(new Anibugi());
        PoList_level2.add(new IsanghaeGrass());

        PoList_level3.add(null);
        PoList_level3.add(new Lizamong());
        PoList_level3.add(new GgobuckKing());
        PoList_level3.add(new IsanghaeFlower());

    }
}
