<?php

namespace Rector\Tests\DeadCode\Rector\Assign\RemoveDoubleAssignRector\Fixture;

class KeepDimAssign
{
    public function create()
    {
        $eventInfos = [];

        $eventInfos[] = 1;
        $eventInfos[] = 1;

        return $eventInfos;
    }
}
