<?php

namespace Rector\Tests\Php80\Rector\Class_\AnnotationToAttributeRector\Fixture;

use Symfony\Component\Routing\Annotation\Route;

class SymfonyRoute
{
    /**
     * @Route("/path", name="action")
     */
    public function action()
    {
    }
}

?>
-----
<?php

namespace Rector\Tests\Php80\Rector\Class_\AnnotationToAttributeRector\Fixture;

use Symfony\Component\Routing\Annotation\Route;

class SymfonyRoute
{
    #[\Symfony\Component\Routing\Annotation\Route(path: '/path', name: 'action')]
    public function action()
    {
    }
}

?>
