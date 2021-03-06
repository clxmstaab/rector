<?php

namespace Rector\Tests\Php71\Rector\FuncCall\RemoveExtraParametersRector\Fixture;

use Mockery\MockInterface;

class SkipCallUserFuncArray
{
    /** @var MockInterface */
    protected $model;

    public function run()
    {
        $ids = [23, 454];

        $this->model
            ->shouldReceive('get')
            ->once()
            ->andReturns($ids);
    }
}
