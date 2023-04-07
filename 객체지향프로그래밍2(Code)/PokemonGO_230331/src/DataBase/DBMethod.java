package DataBase;

import java.sql.ResultSet;
public class DBMethod extends DBManager{
    // DB 데이터 입력(INSERT)
    // 승리 시 pokemonDB -> pokemonDictionary
    public static void winPokemonInsertDictionary(int ranNum){
        try{
            stm.executeUpdate("UPDATE pokemonDB.wildpokemondictionary " +
                    "SET " +
                    "`pokemon_dictionary_id` = " + ranNum + ", " +
                    "`name` = (SELECT `name` FROM pokemonDB.pokemondatabase where `id` = " + ranNum +  ")," +
                    "`skill1` = (SELECT `skill1` FROM pokemonDB.pokemondatabase where `id` = " + ranNum + ")," +
                    "`skill2` = (SELECT `skill2` FROM pokemonDB.pokemondatabase where `id` = " + ranNum + ")" +
                    "WHERE id = " + ranNum);


        } catch (Exception e){
            e.printStackTrace();
        }
    }

    // DB 데이터 가져오기(SELECT)
    // 도감 확인 시 데이터 조회
    public static void selectWildPokemonName(int wildRan){
        try{
            ResultSet rs = stm.executeQuery("SELECT name FROM `pokemonDataBase` WHERE id = " + wildRan);

            while (rs.next()) {
                System.out.println("야생포켓몬 " + rs.getString(1) + "이(가) 나타났다!!");
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }
    static String wildPokemonName;
    public static String getWildPokemonName(int wildRan){
        try{
            ResultSet rs = stm.executeQuery("SELECT name FROM `pokemonDataBase` WHERE id = " + wildRan);
            while(rs.next()) {
                wildPokemonName = rs.getString(1);
            }
        } catch(Exception e){
            e.printStackTrace();
        }
        return wildPokemonName;

    }
    public static void selectWildPokemonSkill(int wildRan){
        try{

            int wildSkillNum = (int)(Math.random() * 2) + 2;
            ResultSet rs = stm.executeQuery("SELECT name, skill1, skill2 FROM `pokemonDataBase` WHERE id = " + wildRan);

            while (rs.next()) {
                System.out.println("야생포켓몬 " + rs.getString(1) + "이(가) " + rs.getString(wildSkillNum) + "을(를) 시전했다!");
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

}
