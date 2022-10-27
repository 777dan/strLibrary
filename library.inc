<?php
/**
*Бибиотека функций для работы со строками
*@author Данил Никитин
*/
/* Удаление слов через одно */
function deleteWords($arr)
{
    for ($i = 0; $i < count($GLOBALS['arr']); $i++) {
        if ($i % 2 != 0) {
            $arr[$i] = "";
            return implode(" ", $arr);
        }
    }
}
/* Формирование строки из первых букв каждого элемента массива */
function firstLeter($arr) {
    for ($i = 0; $i < count($arr); $i++) {
        $arr1[$i] = $arr[$i][0];
    }
    return implode(" ", $arr1);
}
/* Замена порядка букв строки на противоположный */
function reverseSorting($arr)
{
    krsort($arr);
    return implode(" ", $arr);
}