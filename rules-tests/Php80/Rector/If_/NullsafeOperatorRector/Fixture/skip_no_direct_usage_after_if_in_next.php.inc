<?php

namespace Rector\Tests\Php80\Rector\If_\NullsafeOperatorRector\Fixture;

class SkipNoDirectUsageAfterIfInNext
{
    public function f($o)
    {
        $o2 = $o->mayFail1();
        if ($o2 === null) {
            return null;
        }

        $mayFail2 = $o2->mayFail2();
        if ($mayFail2 === null) {
            return null;
        }

        $mayFail3 = $mayFail2->mayFail3();
        if ($mayFail3 === null) {
            return null;
        }

        echo 'STATEMENT HERE';

        return $mayFail3->mayFail4();
    }
}

?>
