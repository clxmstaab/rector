<?php

namespace Rector\Tests\Php74\Rector\Property\TypedPropertyRector\Fixture;

use Doctrine\Common\Collections\Collection;
use Doctrine\ORM\Mapping as ORM;
use Pehapkari\Training\Entity\TrainingTerm;

/**
 * @ORM\Entity
 */
class DoctrineIntersectCollection
{
    /**
     * @ORM\OneToMany(targetEntity="Pehapkari\Training\Entity\TrainingTerm", mappedBy="training")
     * @var TrainingTerm[]&Collection
     */
    private $training;
}

?>
-----
<?php

namespace Rector\Tests\Php74\Rector\Property\TypedPropertyRector\Fixture;

use Doctrine\Common\Collections\Collection;
use Doctrine\ORM\Mapping as ORM;
use Pehapkari\Training\Entity\TrainingTerm;

/**
 * @ORM\Entity
 */
class DoctrineIntersectCollection
{
    /**
     * @ORM\OneToMany(targetEntity="Pehapkari\Training\Entity\TrainingTerm", mappedBy="training")
     * @var TrainingTerm[]&Collection
     */
    private \Doctrine\Common\Collections\Collection $training;
}

?>
