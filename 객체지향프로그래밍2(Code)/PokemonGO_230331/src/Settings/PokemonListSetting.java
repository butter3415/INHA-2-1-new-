package Settings;

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

import java.util.Arrays;
import java.util.List;

public class PokemonListSetting {
    private static List<Pokemon> PoList_level1 = Arrays.asList( null, new Pairi(), new Ggobugi(), new IsanghaeSeed());
    private static List<Pokemon> PoList_level2 = Arrays.asList( null, new Lizard(), new Anibugi(), new IsanghaeGrass());
    private static List<Pokemon> PoList_level3 = Arrays.asList( null, new Lizamong(), new GgobuckKing(), new IsanghaeFlower());

    public static List<Pokemon> getPoList_level1() {
        return PoList_level1;
    }
    public static List<Pokemon> getPoList_level2() {return PoList_level2;}
    public static List<Pokemon> getPoList_level3() {return PoList_level3;}
}
