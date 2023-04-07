package DataBase;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class DBManager {
    private Connection cnt;
    static Statement stm;

    // DB 연결
    void connectDB(){
        try{
            // 자바 라이브러리 파일 로드
            Class.forName("com.mysql.jdbc.Driver");

            // 네트워크 입출력 객체 생성
            cnt = DriverManager.getConnection("jdbc:mysql://localhost:3306","root","1234");

            // 워크시트 생성
            stm = cnt.createStatement();

            stm.executeUpdate("DROP DATABASE IF EXISTS `pokemonDB`");
            stm.executeUpdate("CREATE DATABASE `pokemonDB`");
            stm.executeUpdate("USE `pokemonDB`");



        } catch(Exception e){
            e.printStackTrace();
        }
    }

    // DB 연결 해제
    void closeDB(){
        try{
            // DB 연결 해제
            cnt.close();

        } catch (Exception e){
            e.printStackTrace();
        }
    }


    // DB 데이터 생성(CREATE)
    // 야생 포켓몬 DB 구축 : pokemonDB
    void createPokemonDB(){
        try{
            // pokemonDataBase (야생포켓몬 목록 데이터베이스 생성 쿼리문)
            stm.executeUpdate(
                    "CREATE TABLE `pokemonDataBase`(id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, name varchar(70), `skill1` varchar(70),`skill2` varchar(70))");

            // wildPokemonDictionaryQuery (야생포켓몬 도감 데이터베이스 생성 쿼리문)
            stm.executeUpdate(
                    "CREATE TABLE `wildPokemonDictionary`(id INT PRIMARY KEY NOT NULL AUTO_INCREMENT, pokemon_dictionary_id INT, name varchar(70), skill1 varchar(70), skill2 varchar(70))");



            // 한국어 사용 가능하도록 설정
            stm.executeUpdate("ALTER TABLE `pokemonDataBase` convert to charset utf8");
            stm.executeUpdate("ALTER TABLE `wildPokemonDictionary` convert to charset utf8");

        } catch(Exception e){
            e.printStackTrace();
        }
    }


    // DB 데이터 입력(INSERT)
    // 야생포켓몬 목록 입력
    void insertWildPokemon(){
        try{
            PokemonForDBSaveDetail[] pokemonList = {
                    new PokemonForDBSaveDetail("마그마", "불꽃펀치","화염방사"),
                    new PokemonForDBSaveDetail("슈륙챙이", "거품광선","물대포"),
                    new PokemonForDBSaveDetail("세꿀버리", "바람일으키기","벌레의야단법석"),
                    new PokemonForDBSaveDetail("로즈레이드", "메지컬리프","꽃보라"),
                    new PokemonForDBSaveDetail("잠만보", "코골기","메가톤펀치"),
                    new PokemonForDBSaveDetail("망나뇽", "드래콘테일","회오리"),
                    new PokemonForDBSaveDetail("팬텀", "섀도펀치","섀도볼"),
                    new PokemonForDBSaveDetail("롱스톤", "스톤샤워","락블레스트"),
                    new PokemonForDBSaveDetail("버터풀", "환상빔","실뿜기"),
                    new PokemonForDBSaveDetail("야도란", "사념의박치기","물의파동"),
                    new PokemonForDBSaveDetail("라플레시아", "메가드레인","꽃잎댄스"),
                    new PokemonForDBSaveDetail("마릴", "힘껏치기","아쿠아링"),
                    new PokemonForDBSaveDetail("브케인", "화염바퀴","불꽃엄니"),
                    new PokemonForDBSaveDetail("나무지기", "리프스톰","나뭇잎"),
                    new PokemonForDBSaveDetail("다크라이", "악의파동","사이코키네시스"),
                    new PokemonForDBSaveDetail("불꽃숭이", "화염자동차","불꽃세례"),
                    new PokemonForDBSaveDetail("또도가스", "오물폭탄","스모그"),
                    new PokemonForDBSaveDetail("괴력몬", "리벤지","폭발펀치"),
                    new PokemonForDBSaveDetail("쟝고", "더블어택","칼등치기"),
                    new PokemonForDBSaveDetail("폴리곤", "트라이어택","객기")
            };

            // 야생 포켓몬 목록 입력 쿼리
            for (PokemonForDBSaveDetail pNS : pokemonList){

                stm.executeUpdate("INSERT INTO `pokemonDataBase` " +
                        "VALUES(0,'" + pNS.getName() + "', '" + pNS.getSkill1() + "', '" + pNS.getSkill2() + "')");

                stm.executeUpdate("INSERT INTO `wildPokemonDictionary` " +
                        "VALUES(0, null, null, null, null)");
            }
        } catch(Exception e){
            e.printStackTrace();
        }
    }

    public DBManager() {
        try {
            connectDB();
            createPokemonDB();
            insertWildPokemon();

        } catch(Exception e){
            e.printStackTrace();
        }
    }
}
