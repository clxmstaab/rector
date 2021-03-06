<?php

namespace Rector\Tests\DeadCode\Rector\StaticCall\RemoveParentCallWithoutParentRector\Fixture;

class SkipEdgeCase extends AbstractFilterFactory
{
    public function getOrderByIdDesc()
    {
        return parent::getOrderByColumnDesc('id');
    }
}

abstract class AbstractFilterFactory
{
    public function getOrderByColumnDesc(string $column)
    {
        return new OrderByDesc($column);
    }
}
