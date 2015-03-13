<?php

$input = explode(' ', trim(fgets(STDIN)));
$a = (int)$input[0];
$b = (int)$input[1];

$p0 = function() use(&$a) {
    if($a > 0)
    {
        print(0);
        $a--;
    }
};
$p1 = function() use(&$b) {
    if($b > 0)
    {
        print(1);
        $b--;
    }
};

ob_start();

if($a > $b + 1)
    print(-1);
else if(($a + 1) * 2 < $b)
    print(-1);
else
{
    if($a > $b)
        $p0();
    while($a < $b)
    {    
        $p1(); $p1(); $p0();
    }
    while($a > 0 || $b > 0)
    {
        $p1(); $p0();
    }
}
print("\n");
ob_end_flush();
