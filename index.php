<?php
$str = "There are many cats in our house.";
$arr = explode(" ", $str);
require_once "library.inc";
echo firstLeter($arr);
// function getFunction()
// {
//     // call_user_func('deleteWords');
//     deleteWords();
//     print $GLOBALS["str1"];
// }
// getFunction();
// function reverseSorting()
// {
//     krsort($GLOBALS['arr']);
// }
// function deleteWords()
// {
//     for ($i = 0; $i < count($GLOBALS['arr']); $i++) {
//         if ($i % 2 != 0) {
//             $GLOBALS["arr"][$i] = "";
//             $GLOBALS["str1"] = implode(" ", $GLOBALS["arr"]);
//         }
//     }
// }
// function firstLeter() {
//     for ($i = 0; $i < count($GLOBALS['arr']); $i++) {
//         echo $GLOBALS['arr'][$i][0];
//     }
// }