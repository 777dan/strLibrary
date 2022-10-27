<?php
/**
*Бибиотека функций для работы со строками
*@author Данил Никитин
*/
/* Удаление слов через одно */
function deleteWords()
{
    for ($i = 0; $i < count($GLOBALS['arr']); $i++) {
        if ($i % 2 != 0) {
            $GLOBALS["arr"][$i] = "";
            $GLOBALS["str1"] = implode(" ", $GLOBALS["arr"]);
        }
    }
}
/* Формирование строки из первых букв каждого элемента массива */
function firstLeter() {
    for ($i = 0; $i < count($GLOBALS['arr']); $i++) {
        $GLOBALS["arr"][$i] = $GLOBALS['arr'][$i][0];
        $GLOBALS["str1"] = implode("", $GLOBALS["arr"]);
    }
}
/* Замена порядка букв строки на противоположный */
function reverseSorting()
{
    krsort($GLOBALS['arr']);
    $GLOBALS["str1"] = implode(" ", $GLOBALS['arr']);
}