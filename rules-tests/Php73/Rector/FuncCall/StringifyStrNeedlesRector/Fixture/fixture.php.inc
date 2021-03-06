<?php

namespace Rector\Tests\Php73\Rector\FuncCall\StringifyStrNeedlesRector\Fixture;

function stringifyStrNeedle()
{
    $needle = 5;
    $fivePosition = strpos('725', $needle);

    $needle = '5';
    $fivePosition = strpos('725', $needle);

    $needle = '1';
    $fivePosition = stripos('725', $needle);
}

?>
-----
<?php

namespace Rector\Tests\Php73\Rector\FuncCall\StringifyStrNeedlesRector\Fixture;

function stringifyStrNeedle()
{
    $needle = 5;
    $fivePosition = strpos('725', (string) $needle);

    $needle = '5';
    $fivePosition = strpos('725', $needle);

    $needle = '1';
    $fivePosition = stripos('725', $needle);
}

?>
