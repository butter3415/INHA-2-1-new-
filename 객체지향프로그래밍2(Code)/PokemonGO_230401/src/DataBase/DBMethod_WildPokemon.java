package DataBase;

import java.sql.ResultSet;
public class DBMethod_WildPokemon extends DBManager{
    // =============================================================================================================================================
    //    <야생포켓몬 관련 함수>
    // - [winPokemonInsertDictionary(int wildRan)] 승리 시 포켓몬 도감 추가
    // - [selectWildPokemonName(int wildRan)] 야생포켓몬 등장 시 "000이 나타났다!" 문구 표현 함수
    // - [getWildPokemonName(int wildRan)] 야생포켓몬과 대결 시 "xxx 이(가) 000 에게 [승리/패배]했다!"" 문구 표현 위한 `이름 000` 불러오기
    // - [selectWildPokemonSkill(int wildRan)] 야생포켓몬 등장 시 "야생포켓몬 000이 ㅁㅁㅁ을 시전했다!" 문구 표현 함수

    // ---------------------------------------------------------------------------------------------------------------------------------------------

    // DB 데이터 바꾸기(UPDATE)
    // 야생포켓몬과의 대결에서 승리 시 포켓몬 도감 추가 함수
    // 야생포켓몬 id 매개변수 입력 필요 - 랜덤 설정
    public static void winPokemonInsertDictionary(int wildRan){
        try{
            stm.executeUpdate("UPDATE pokemonGO_DB.wildpokemondictionary " +
                    "SET " +
                    "`pokemon_dictionary_id` = " + wildRan + ", " +
                    "`pokemonName` = (SELECT `pokemonName` FROM pokemonGO_DB.pokemondatabase where `id` = " + wildRan +  ")," +
                    "`skill1` = (SELECT `skill1` FROM pokemonGO_DB.pokemondatabase where `id` = " + wildRan + ")," +
                    "`skill2` = (SELECT `skill2` FROM pokemonGO_DB.pokemondatabase where `id` = " + wildRan + ")" +
                    "WHERE id = " + wildRan);

        } catch (Exception e){
            e.printStackTrace();
        }
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------

    // DB 데이터 가져오기(SELECT)
    // 야생포켓몬 등장 시 "000이 나타났다!" 문구 표현 함수
    // 야생포켓몬 id 매개변수 입력 필요
    public static void selectWildPokemonName(int wildRan){
        try{
            ResultSet rs = stm.executeQuery("SELECT pokemonName FROM `pokemonDataBase` WHERE id = " + wildRan);

            while (rs.next()) {
                System.out.println("야생포켓몬 " + rs.getString(1) + "이(가) 나타났다!!");
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------

    // DB 데이터 가져오기(SELECT)
    // 야생포켓몬과 대결 시 "xxx 이(가) 000 에게 [승리/패배]했다!"" 문구 표현 위한 `이름 000` 불러오기

    static String wildPokemonName;

    public static String getWildPokemonName(int wildRan){
        try{
            ResultSet rs = stm.executeQuery("SELECT pokemonName FROM `pokemonDataBase` WHERE id = " + wildRan);

            while(rs.next()) {
                wildPokemonName = rs.getString(1);
            }
        } catch(Exception e){
            e.printStackTrace();
        }
        return wildPokemonName;

    }

    // ---------------------------------------------------------------------------------------------------------------------------------------------

    // DB 데이터 가져오기(SELECT)
    // 야생포켓몬 등장 시 "야생포켓몬 000이 ㅁㅁㅁ을 시전했다!" 문구 표현 함수
    public static void selectWildPokemonSkill(int wildRan){
        try{

            int wildSkillNum = (int)(Math.random() * 2) + 2;
            ResultSet rs = stm.executeQuery("SELECT pokemonName, skill1, skill2 FROM `pokemonDataBase` WHERE id = " + wildRan);

            while (rs.next()) {
                System.out.println("야생포켓몬 " + rs.getString(1) + "이(가) " + rs.getString(wildSkillNum) + "을(를) 시전했다!");
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }


}
